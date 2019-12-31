/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCFPItemCollectionManager : NSObject {
    NSCountedSet * _activeCollections;
}

@property (nonatomic, readonly, copy) NSArray *observingCollections;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForegroundNotification;
- (void)collectionDidStartObserving:(id)arg1;
- (void)collectionDidStopObserving:(id)arg1;
- (id)init;
- (id)observingCollections;

@end
