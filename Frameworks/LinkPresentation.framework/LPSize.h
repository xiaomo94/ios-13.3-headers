/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPSize : NSObject <NSCopying> {
    LPPointUnit * _height;
    LPPointUnit * _width;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } asSize;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, readonly, retain) LPPointUnit *height;
@property (nonatomic, readonly, retain) LPPointUnit *width;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })asSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)height;
- (id)init;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithSquareSize:(double)arg1;
- (bool)isEmpty;
- (id)width;

@end
