# RevanScript (RVS) Programming Language Project
An efficient, lightweight, and direct execution interpreter model built from scratch.

<p align="center">
  <img src="RevanScript-RVS-Logo.png" width="200" alt="RevanScript Logo"/>
</p>

## ≡ƒôû Introduction
**RevanScript (RVS)** sad╔Ö, command-based (╔Ömr ╔Ösasl─▒) t╔Öm╔Öl╔Ö sahib bir proqramla┼ƒd─▒rma dilidir. Olduqca minimal v╔Ö anla┼ƒ─▒lan bir sintaksis╔Ö malikdir. RevanScript (RVS) dilinin ╔Ösas ├╝st├╝nl├╝y├╝ onun s├╝r╔Ötli v╔Ö y├╝ng├╝l i┼ƒl╔Öy╔Ön daxili t╔Örc├╝m╔Ö├ºi (interpreter) proqram─▒na sahib olmas─▒d─▒r. 

Layih╔Ö tamamil╔Ö **C proqramla┼ƒd─▒rma dili** il╔Ö s─▒f─▒rdan haz─▒rlanm─▒┼ƒd─▒r.

## ≡ƒÆÄ Data Types
Dild╔Ö m├╝xt╔Ölif m╔Ölumat tipl╔Örinin idar╔Ö edilm╔Ösi n╔Öz╔Örd╔Ö tutulmu┼ƒdur. Haz─▒rda a┼ƒa─ƒ─▒dak─▒ primitiv tipl╔Ör tam i┼ƒl╔Ök v╔Öziyy╔Ötd╔Ödir:
* **String** (M╔Ötn tipi)
* **Integer** (Tam ╔Öd╔Öd tipi)
* **Float** (K╔Ösr ╔Öd╔Öd tipi)
* **Boolean** (M╔Öntiq tipi)
* **Null** (Bo┼ƒluq tipi)

## ≡ƒôé Project Layers & Architecture
RevanScript layih╔Ösi modulyar arxitekturaya malikdir v╔Ö a┼ƒa─ƒ─▒dak─▒ C fayllar─▒ (Layers) vasit╔Ösil╔Ö idar╔Ö olunur:

1. **Memory Management:** `src/rvsmem.c` | `include/rvsmem.h`
2. **Buffer Memory Management:** `src/rvsbuf.c` | `include/rvsbuf.h`
3. **Expression Memory Management:** `src/rvsexp.c` | `include/rvsexp.h`
4. **I/O Handling:** `src/rvsio.c` | `include/rvsio.h`
5. **Interpreter Flags:** `src/rvsflg.c` | `include/rvsflg.h`
6. **Control & Checking:** `src/rvsctl.c` | `include/rvsctl.h`
7. **Math Engine:** `src/rvsmth.c` | `include/rvsmth.h`

## ≡ƒÆ╗ RevanScript Code Examples
A┼ƒa─ƒ─▒da RevanScript (RVS) dilinin ╔Ösas ╔Ömrl╔Örini v╔Ö sintaksisini g├╢st╔Ör╔Ön sad╔Ö n├╝mun╔Ö kod verilmi┼ƒdir:

```custom
... RevanScript (RVS) Comment 
var text = "Hello, World!\n" 
out text 
set text = "\t\c4RevanScript (RVS) Programming Language\n" 
out text 
inp text 
out text 
cst text 
del text 
```

## ≡ƒîÉ Community & Official Links
RevanScript inki┼ƒaf prosesini izl╔Öm╔Ök v╔Ö layih╔Öy╔Ö d╔Öst╔Ök olmaq ├╝├º├╝n a┼ƒa─ƒ─▒dak─▒ r╔Ösmi resurslardan istifad╔Ö ed╔Ö bil╔Örsiniz:

* **≡ƒô║ YouTube Tutorials:** [RvCodes9 YouTube Channel](https://youtube.com/@RvCodes9) ΓÇö Praktik n├╝mun╔Öl╔Ör v╔Ö video b╔Öl╔Öd├ºil╔Ör.
* **≡ƒôä Official Documentation:** [RevanScript Pages Site](https://rvcodes9.github.io/RevanScript-RVS-Documetation-Site/) ΓÇö Geni┼ƒ m╔Ölumat v╔Ö d╔Örslikl╔Ör.
* **≡ƒÆ¼ Reddit Community:** [r/RevanScript](https://www.reddit.com/r/RevanScript/) ΓÇö Fikir bildirm╔Ök, m├╝zakir╔Ö etm╔Ök v╔Ö sual verm╔Ök ├╝├º├╝n r╔Ösmi sub-reddit.

## ≡ƒÆí Creator
RevanScript (RVS) 2026 ci ild╔Ö 4 aprel yarad─▒lm─▒┼ƒ bir proqramla┼ƒd─▒rma dili lahiy╔Ösidir. Proqramla┼ƒd─▒rma dilinin yarad─▒c─▒si R╔Övan Babayev (Revan Babayev) dir. RevanScript (RVS) haz─▒rda aktiv inki┼ƒaf etm╔Ökd╔Ö olan lahiy╔Ödir.