/* Generated by RuntimeBrowser.
 */

@protocol TSCH3DChartElementSceneObjectElementDelegate

@required

- (void)didProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (void)didTransformElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (struct ElementRenderPass { int x1; })renderPassForElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (bool)willProcessElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (bool)willProcessElements:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;
- (bool)willRenderElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (bool)willSubmitElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;
- (bool)willUpdateElementEffectsStatesForElement:(TSCH3DRenderElementInfo *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2;

@end
