# KiCad setup (Micromouse)

Use **KiCad 9.x** (project saved with 9.0.x).

## 1. Clone and folder layout

Libraries use **`${KIPRJMOD}`** (the folder that contains `MicromouseSchematic.kicad_pro`) and **`..`** to reach parts that live next to the schematic folder.

After clone you should have this shape (names matter):

```text
<repo root>/
  Micromouse/
    MicromouseSchematic/          ← open the project from here
      MicromouseSchematic.kicad_pro
      MicromouseSchematic.kicad_sch
      sym-lib-table
      fp-lib-table
      …
    TPSM861253RDXR/
    VL6180V1NR_1/
    TCA9544APWR/
    SFH 3015 FA/                  ← folder name includes a space
    LP5907MFX_2_8_NOPB/
    LIS2MDLTR/
    ICM_42688_P/
    DMN3065LW-7/
    MP6550G-Z/
    …
```

If you move only `MicromouseSchematic/` somewhere else without the sibling `Micromouse/<part>/` folders, **footprints and symbols will not resolve**.

## 2. Open the project

1. **File → Open Project…**
2. Choose: `Micromouse/MicromouseSchematic/MicromouseSchematic.kicad_pro`

Do **not** rely on global library paths for team parts: the project ships **`sym-lib-table`** and **`fp-lib-table`** next to the `.kicad_pro` file.

## 3. First-time check

1. **Preferences → Manage Symbol Libraries…**  
   Confirm **Project Specific Libraries** lists entries whose URI looks like `${KIPRJMOD}/../…` (not another user’s absolute path).

2. **Preferences → Manage Footprint Libraries…**  
   Same for footprint libs (nicknames like `MM_TPSM861253RDXR`, etc.).

3. Open the schematic, run **Inspect → Electrical Rules Checker**.  
   Fix or waive any issues your branch cares about.

If you still see **footprint not found**:

- Confirm the **directory tree** in section 1 matches your disk.
- On Windows, avoid running from a cloud-sync copy that rewrites paths oddly; a normal local clone is best.

## 4. What this repo ignores (Git)

Ignoring these files does **not** replace the folder layout in section 1. It only keeps **per-machine** junk out of pull requests.

The following are **local / machine-generated** and not meant to be committed:

- `Micromouse/MicromouseSchematic/fp-info-cache`
- `Micromouse/MicromouseSchematic/*.kicad_prl` (window layout / last paths)
- `Micromouse/MicromouseSchematic/*-backups/` (KiCad automatic backups)
- Lock files (`*.lck`, `~*.kicad_sch.lck`)

After pulling, KiCad will recreate cache and `.kicad_prl` when you open the project.

If your branch **removes** old backup zips from Git history in a commit, that is expected; keep your own backups elsewhere if you need them.

## 5. Moving to PCB layout

Once ERC is acceptable for your team and symbols show the expected footprints, you can proceed with **PCB Editor**: **Update PCB from Schematic** when the schematic changes, then run **DRC** on the board.

If anything in this layout breaks for someone on macOS or Linux, compare their folder tree to section 1; the `${KIPRJMOD}/../…` URIs are portable as long as that tree is preserved.
