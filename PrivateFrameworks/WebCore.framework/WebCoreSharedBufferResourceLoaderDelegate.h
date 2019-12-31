/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreSharedBufferResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate> {
    bool  _complete;
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                _Atomic unsigned char __a_; 
            } value; 
        } m_byte; 
    }  _dataLock;
    long long  _expectedContentSize;
    struct ImageDecoderAVFObjC { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct RetainPtr<AVURLAsset> { void *x_5_1_1; } x5; struct RetainPtr<AVAssetTrack> { void *x_6_1_1; } x6; struct RetainPtr<WebCoreSharedBufferResourceLoaderDelegate> { void *x_7_1_1; } x7; struct unique_ptr<WebCore::ImageRotationSessionVT, std::__1::default_delete<WebCore::ImageRotationSessionVT> > { struct __compressed_pair<WebCore::ImageRotationSessionVT *, std::__1::default_delete<WebCore::ImageRotationSessionVT> > { struct ImageRotationSessionVT {} *x_1_2_1; } x_8_1_1; } x8; struct Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> > { struct WebCoreDecompressionSession {} *x_9_1_1; } x9; struct Function<void (WebCore::EncodedDataStatus)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> > >=^{CallableWrapperBase<void, WebCore::EncodedDataStatus> {} x10; } * _parent;
    struct Vector<WTF::RetainPtr<AVAssetResourceLoadingRequest>, 0, WTF::CrashOnOverflow, 16> { 
        struct RetainPtr<AVAssetResourceLoadingRequest> {} *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _requests;
}

@property (readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)canFulfillRequest:(id)arg1;
- (id)data;
- (void)enqueueRequest:(id)arg1;
- (void)fulfillPendingRequests;
- (void)fulfillRequest:(id)arg1;
- (id)initWithParent:(struct ImageDecoderAVFObjC { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; struct RetainPtr<AVURLAsset> { void *x_5_1_1; } x5; struct RetainPtr<AVAssetTrack> { void *x_6_1_1; } x6; struct RetainPtr<WebCoreSharedBufferResourceLoaderDelegate> { void *x_7_1_1; } x7; struct unique_ptr<WebCore::ImageRotationSessionVT, std::__1::default_delete<WebCore::ImageRotationSessionVT> > { struct __compressed_pair<WebCore::ImageRotationSessionVT *, std::__1::default_delete<WebCore::ImageRotationSessionVT> > { struct ImageRotationSessionVT {} *x_1_2_1; } x_8_1_1; } x8; struct Ref<WebCore::WebCoreDecompressionSession, WTF::DumbPtrTraits<WebCore::WebCoreDecompressionSession> > { struct WebCoreDecompressionSession {} *x_9_1_1; } x9; struct Function<void (WebCore::EncodedDataStatus)>={unique_ptr<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void, WebCore::EncodedDataStatus> > >=^{CallableWrapperBase<void, WebCore::EncodedDataStatus> {} x10; }*)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)setExpectedContentSize:(long long)arg1;
- (void)updateData:(id)arg1 complete:(bool)arg2;

@end
