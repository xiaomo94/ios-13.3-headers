/* Generated by RuntimeBrowser.
 */

@protocol KNAnimationPluginContext <NSObject>

@required

- (TSDGLState *)GLState;
- (KNAnimatedBuild *)animatedBuild;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationFrame;
- (TSDAnimationSet *)animationSet;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectOnCanvas;
- (unsigned long long)direction;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawableFrame;
- (double)duration;
- (bool)hasLiveTextureSources;
- (bool)isBuild;
- (bool)isFrameRenderer;
- (bool)isMagicMove;
- (bool)isMetalRenderer;
- (bool)isMotionBlurred;
- (bool)isMovieExport;
- (bool)isOpenGLRenderer;
- (bool)isPreview;
- (bool)isTransition;
- (bool)isWarmingUp;
- (NSArray *)magicMoveMatches;
- (TSDMetalContext *)metalContext;
- (TSDMetalTextureRenderer *)metalTextureRenderer;
- (double)percent;
- (KNAnimationRandomGenerator *)randomGenerator;
- (NSArray *)scaledTextures;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (NSArray *)tags;
- (NSArray *)textures;
- (NSDictionary *)transitionAttributes;

@end
