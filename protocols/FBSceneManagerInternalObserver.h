/* Generated by RuntimeBrowser.
 */

@protocol FBSceneManagerInternalObserver <FBSceneManagerObserver>

@optional

- (void)sceneManager:(FBSceneManager *)arg1 interceptUpdateForSceneDeactivationManager:(FBScene *)arg2 withNewSettings:(FBSMutableSceneSettings *)arg3;
- (void)sceneManagerDidEndSceneUpdateSynchronization:(FBSceneManager *)arg1;
- (void)sceneManagerWillBeginSceneUpdateSynchronization:(FBSceneManager *)arg1;

@end
