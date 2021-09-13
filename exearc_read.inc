
;
; exearc_read.inc
; (c)2002 Jonathan Bennett (jon@hiddensoft.com)
;
; Version: v3
;
; STANDALONE CLASS
;

HS_EXEARC_FILEVERSION	 = 3			   ; File wrapper version

; Error codes
HS_EXEARC_E_OK		 = 0
HS_EXEARC_E_OPENEXE	 = 1
HS_EXEARC_E_OPENINPUT	 = 2
HS_EXEARC_E_NOTARC	 = 3
HS_EXEARC_E_BADVERSION	 = 4
HS_EXEARC_E_BADPWD	 = 5
HS_EXEARC_E_FILENOTFOUND = 6
HS_EXEARC_E_OPENOUTPUT	 = 7
HS_EXEARC_E_MEMALLOC	 = 8

HS_EXEARC_MAXPWDLEN	 = 256

struct HS_EXEArc_Read
  m_fEXE	    dd ?
  m_nArchivePtr     dd ?
  m_nFileSectionPtr dd ?
  m_szPwd	    db HS_EXEARC_MAXPWDLEN+1 dup (?)
  m_nPwdHash	    dd ?
ends