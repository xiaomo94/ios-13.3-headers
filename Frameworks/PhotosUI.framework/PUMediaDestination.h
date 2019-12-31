/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMediaDestination : NSObject

- (void)cancelRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isSavingRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 useRawIfAvailable:(bool)arg4 completionHandler:(id /* block */)arg5;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 originalComposition:(id)arg6 useRawIfAvailable:(bool)arg7 completionHandler:(id /* block */)arg8;
- (int)saveInternalEditsForAsset:(id)arg1 usingCompositionController:(id)arg2 contentEditingOutput:(id)arg3 version:(long long)arg4 livePhotoEditModel:(id)arg5 useRawIfAvailable:(bool)arg6 completionHandler:(id /* block */)arg7;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
