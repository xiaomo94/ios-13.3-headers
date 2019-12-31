/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXCuratedLibraryInlineHeadersLayoutSpec : PXFeatureSpec {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerContentMargins;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _headerFloatMargins;
    double  _headerOffsetY;
    unsigned long long  _style;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerContentMargins;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } headerFloatMargins;
@property (nonatomic, readonly) double headerOffsetY;
@property (nonatomic, readonly) unsigned long long style;

- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerContentMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerFloatMargins;
- (double)headerOffsetY;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)style;

@end
