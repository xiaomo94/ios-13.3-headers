/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

@interface QLExtensionManagerCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessMatchingExtensionsQueue;
    bool  _isMatchingExtensions;
    NSDictionary * _matchingAttributes;
    id  _matchingContext;
    NSMutableDictionary * _matchingExtensions;
    NSMapTable * _qlExtensions;
    NSObject<OS_dispatch_queue> * _waitForExtensionListQueue;
    NSObject<OS_dispatch_semaphore> * _waitForExtensionsSemaphore;
}

@property (nonatomic) bool isMatchingExtensions;
@property (nonatomic, retain) NSDictionary *matchingAttributes;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic, retain) NSMutableDictionary *matchingExtensions;
@property (nonatomic, retain) NSMapTable *qlExtensions;
@property (retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore;

- (void).cxx_destruct;
- (id)_bestMatchingExtensionsFromSupportingExtensions:(id)arg1 includingExtensionsWithSupportingParentTypes:(bool)arg2 byContentType:(id)arg3;
- (void)_didReceiveNewMatchingExtensionList:(id)arg1;
- (bool)_supportedContentTypesFromExtension:(id)arg1 matches:(id)arg2 allowMatchingWithParentTypes:(bool)arg3;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (void)beginMatchingExtensions;
- (void)dealloc;
- (void)endMatchingExtensions;
- (id)extensionWithMatchingAttributes:(id)arg1 allowExtensionsForParentTypes:(bool)arg2 extensionPath:(id)arg3;
- (bool)hasExtensionWithMatchingAttributes:(id)arg1;
- (id)initWithMatchingAttributes:(id)arg1;
- (bool)isMatchingExtensions;
- (id)matchingAttributes;
- (id)matchingContext;
- (id)matchingExtensions;
- (id)qlExtensions;
- (void)setIsMatchingExtensions:(bool)arg1;
- (void)setMatchingAttributes:(id)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setMatchingExtensions:(id)arg1;
- (void)setQlExtensions:(id)arg1;
- (void)setWaitForExtensionsSemaphore:(id)arg1;
- (id)waitForExtensionsSemaphore;

@end
