/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

@interface SWNavigationManager : NSObject <SWNavigationManager> {
    SWNavigationPreview * _currentPreview;
    NSMutableDictionary * _extensionHandlers;
    NSMutableArray * _handlers;
    NSMutableSet * _observers;
    NSMutableDictionary * _schemeHandlers;
}

@property (nonatomic, retain) SWNavigationPreview *currentPreview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *extensionHandlers;
@property (nonatomic, readonly) NSMutableArray *handlers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableSet *observers;
@property (nonatomic, readonly) NSMutableDictionary *schemeHandlers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)actionForRequest:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)commitViewController:(id)arg1;
- (id)currentPreview;
- (id)extensionHandlers;
- (id)handlers;
- (id)init;
- (id)observers;
- (id)previewViewControllerForRequest:(id)arg1;
- (void)registerHandler:(id)arg1;
- (void)registerHandler:(id)arg1 extension:(id)arg2;
- (void)registerHandler:(id)arg1 scheme:(id)arg2;
- (void)removeObserver:(id)arg1;
- (id)schemeHandlers;
- (void)setCurrentPreview:(id)arg1;
- (bool)shouldPreviewRequest:(id)arg1;

@end
