/*
Stack : 存放函數的參數、區域變數等，由空間配置系統自行產生與回收。(會稱作 stack 是由於其配置遵守 LIFO)
Heap : 一般由程式設計師分配釋放，執行時才會知道配置大小，如 malloc/new 和 free/delete。(注意其資料結構不是 DS 中的 heap 而是 link-list)
Global : 包含 BSS (未初始化的靜態變數)、data section (全域變數、靜態變數) 和 text/code (常數字元)。
*/
