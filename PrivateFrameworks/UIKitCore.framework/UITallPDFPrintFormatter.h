/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITallPDFPrintFormatter : UIPrintFormatter {
    struct CGPDFDocument { } * _pdfDocRef;
    NSURL * _pdfPath;
    double  _pdfScaleFactor;
    bool  _rotate90;
    double  _shiftUpLength;
}

- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPageAtIndex:(long long)arg2;
- (id)initWithPDFData:(id)arg1;
- (id)initWithPDFURL:(id)arg1;

@end
