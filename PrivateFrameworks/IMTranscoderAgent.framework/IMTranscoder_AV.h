/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscoder_AV : IMTranscoder

+ (id)supportedUTIs;

- (unsigned long long)_fileSizeForTransfer:(id)arg1;
- (bool)_isHEVCVideo:(id)arg1;
- (void)_transcodeVideoAsync:(id)arg1 target:(long long)arg2 maxBytes:(unsigned long long)arg3 removeAlpha:(bool)arg4 userInfo:(id)arg5 completionHandler:(id /* block */)arg6;
- (long long)shouldTranscodeTransfer:(id)arg1 transcoderUserInfo:(id)arg2 target:(long long)arg3 utiType:(id)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (void)transcodeFileTransfer:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 representations:(long long)arg8 completionBlock:(id /* block */)arg9;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(id /* block */)arg3;

@end
