/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuLayoutArbiterInput : NSObject {
    NSArray * _accessoryViews;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _preferredEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredMenuSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredPreviewSize;
    bool  _shouldUpdateAttachment;
    UITargetedPreview * _sourcePreview;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredEdgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredMenuSize;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredPreviewSize;
@property (nonatomic) bool shouldUpdateAttachment;
@property (nonatomic, retain) UITargetedPreview *sourcePreview;

- (void).cxx_destruct;
- (id)accessoryViews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredEdgeInsets;
- (struct CGSize { double x1; double x2; })preferredMenuSize;
- (struct CGSize { double x1; double x2; })preferredPreviewSize;
- (void)setAccessoryViews:(id)arg1;
- (void)setPreferredEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPreferredMenuSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreferredPreviewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setShouldUpdateAttachment:(bool)arg1;
- (void)setSourcePreview:(id)arg1;
- (bool)shouldUpdateAttachment;
- (id)sourcePreview;

@end
