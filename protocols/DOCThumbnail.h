/* Generated by RuntimeBrowser.
 */

@protocol DOCThumbnail <NSObject>

@required

- (void)addListener:(id <DOCThumbnailListener>)arg1;
- (bool)hasFinishedTryingToFetchCorrectThumbnail;
- (bool)isLoading;
- (bool)isRepresentativeIcon;
- (bool)registerGenerationCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeListener:(id <DOCThumbnailListener>)arg1;
- (void)scheduleUpdateIfNeeded;
- (UIImage *)thumbnail;

@end
