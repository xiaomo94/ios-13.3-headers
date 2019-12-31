/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITableCellAccessoryLayout : NSObject <UICellAccessoryLayout> {
    unsigned long long  _edge;
    NSMutableDictionary * _finalAlphas;
    NSDictionary * _finalFrames;
    NSMutableDictionary * _initialAlphas;
    NSDictionary * _initialFrames;
    UICellAccessoryManager * _manager;
    double  _minimumCompressionLayoutWidth;
    double  _safeAreaInset;
    id /* block */  _spacingBlock;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _totalFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long edge;
@property (nonatomic, retain) NSMutableDictionary *finalAlphas;
@property (nonatomic, retain) NSDictionary *finalFrames;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *initialAlphas;
@property (nonatomic, retain) NSDictionary *initialFrames;
@property (nonatomic) UICellAccessoryManager *manager;
@property (nonatomic) double minimumCompressionLayoutWidth;
@property (nonatomic) double safeAreaInset;
@property (nonatomic, copy) id /* block */ spacingBlock;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } totalFrame;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForAccessoryAtIndex:(unsigned long long)arg1 inAccessories:(id)arg2 containerSize:(struct CGSize { double x1; double x2; })arg3 withXOrigin:(double*)arg4;
- (id)_framesForAccessories:(id)arg1 withContainerSize:(struct CGSize { double x1; double x2; })arg2 outTotalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (double)_totalWidthForAccessories:(id)arg1 withContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (unsigned long long)edge;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endLayout;
- (double)finalAlphaForAccessory:(id)arg1;
- (id)finalAlphas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })finalFrameForAccessory:(id)arg1;
- (id)finalFrames;
- (id)init;
- (double)initialAlphaForAccessory:(id)arg1;
- (id)initialAlphas;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameForAccessory:(id)arg1;
- (id)initialFrames;
- (id)manager;
- (double)minimumCompressionLayoutWidth;
- (void)prepareLayoutForAccessories:(id)arg1 previousAccessories:(id)arg2 configurationIdentifier:(id)arg3;
- (double)safeAreaInset;
- (void)setEdge:(unsigned long long)arg1;
- (void)setFinalAlphas:(id)arg1;
- (void)setFinalFrames:(id)arg1;
- (void)setInitialAlphas:(id)arg1;
- (void)setInitialFrames:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setMinimumCompressionLayoutWidth:(double)arg1;
- (void)setSafeAreaInset:(double)arg1;
- (void)setSpacingBlock:(id /* block */)arg1;
- (void)setTotalFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id /* block */)spacingBlock;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })totalFrame;

@end
