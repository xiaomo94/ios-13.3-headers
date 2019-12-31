/* Generated by RuntimeBrowser.
 */

@protocol TMLRectJSExports <JSExport>

@required

- (TMLRect *)applyAffineTransform:(TMLAffineTransform *)arg1;
- (TMLRect *)applyScale:(double)arg1;
- (TMLRect *)atOrigin:(TMLPoint *)arg1;
- (TMLRect *)atOriginX:(double)arg1 y:(double)arg2;
- (double)height;
- (TMLRect *)inset:(double)arg1 :(double)arg2;
- (TMLRect *)integral;
- (TMLRect *)max:(double)arg1 :(double)arg2;
- (TMLPoint *)maxpoint;
- (double)maxx;
- (double)maxy;
- (TMLPoint *)midpoint;
- (double)midx;
- (double)midy;
- (TMLRect *)min:(double)arg1 :(double)arg2;
- (TMLPoint *)minpoint;
- (double)minx;
- (double)miny;
- (TMLRect *)offset:(double)arg1 :(double)arg2;
- (TMLPoint *)origin;
- (TMLRect *)originInset:(double)arg1 :(double)arg2;
- (TMLSize *)size;
- (double)width;
- (TMLRect *)withHeight:(double)arg1;
- (TMLRect *)withWidth:(double)arg1;
- (double)x;
- (double)y;

@end
