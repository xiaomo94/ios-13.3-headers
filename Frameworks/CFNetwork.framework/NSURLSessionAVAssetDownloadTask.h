/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {
    unsigned long long  _AVAssetDownloadToken;
}

@property (readonly) unsigned long long AVAssetDownloadToken;
@property (readonly, copy) NSURL *URL;
@property (readonly, copy) NSURL *destinationURL;

- (unsigned long long)AVAssetDownloadToken;
- (id)URL;
- (id)destinationURL;
- (void)setDestinationURL:(id)arg1;
- (void)setURL:(id)arg1;

@end
