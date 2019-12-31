/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFreehandDrawingRep : TSDGroupRep {
    NSCache * _cachedClusteredShapeRepsForAnimationExport;
}

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })clipRect;
- (id)initWithLayout:(id)arg1 canvas:(id)arg2;
- (bool)isAccessibilityElement;
- (double)opacity;
- (void)p_drawChildShapeReps:(id)arg1 togetherInContext:(struct CGContext { }*)arg2;
- (id)p_freehandDrawingInfo;
- (id)p_freehandDrawingLayout;
- (id)p_shapeChildrenForDrawingRecursively;
- (bool)p_shouldDrawShapeRep:(id)arg1 withOtherShapeRep:(id)arg2;
- (void)recursivelyDrawChildrenInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (void)recursivelyDrawInContext:(struct CGContext { }*)arg1 keepingChildrenPassingTest:(id /* block */)arg2;
- (id)textureForDescription:(id)arg1;
- (bool)tsaxAllowedToEditChildren;
- (id)tsaxChildren;
- (void)willBeRemoved;

@end