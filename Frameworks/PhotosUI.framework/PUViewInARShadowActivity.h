/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUViewInARShadowActivity : UIApplicationExtensionActivity <PXActivity> {
    <PXActivityItemSourceController> * _itemSourceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <PXActivityItemSourceController> *itemSourceController;
@property (readonly) Class superclass;

+ (bool)viewInARActivityAvailable;

- (void).cxx_destruct;
- (id)activityTitle;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)init;
- (id)itemSourceController;
- (void)setItemSourceController:(id)arg1;

@end