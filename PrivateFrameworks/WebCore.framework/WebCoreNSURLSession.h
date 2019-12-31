/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreNSURLSession : NSObject {
    int  _corsResults;
    struct HashSet<WTF::RetainPtr<const void *>, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > > { 
        struct HashTable<WTF::RetainPtr<const void *>, WTF::RetainPtr<const void *>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> >, WTF::HashTraits<WTF::RetainPtr<const void *> > > { 
            struct RetainPtr<const void *> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _dataTasks;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                _Atomic unsigned char __a_; 
            } value; 
        } m_byte; 
    }  _dataTasksLock;
    struct RetainPtr<id<NSURLSessionDelegate> > { 
        void *m_ptr; 
    }  _delegate;
    struct OSObjectPtr<NSObject<OS_dispatch_queue> *> { 
        NSObject<OS_dispatch_queue> *m_ptr; 
    }  _internalQueue;
    bool  _invalidated;
    struct RefPtr<WebCore::PlatformMediaResourceLoader, WTF::DumbPtrTraits<WebCore::PlatformMediaResourceLoader> > { 
        struct PlatformMediaResourceLoader {} *m_ptr; 
    }  _loader;
    unsigned long long  _nextTaskIdentifier;
    struct HashSet<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > { 
        struct HashTable<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> >, WTF::IdentityExtractor, WTF::PtrHash<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > >, WTF::HashTraits<WTF::RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > > > { 
            struct RefPtr<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _origins;
    struct RetainPtr<NSOperationQueue> { 
        void *m_ptr; 
    }  _queue;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _sessionDescription;
}

@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionTaskDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly) bool didPassCORSAccessChecks;
@property (readonly) struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; }*loader;
@property (copy) NSString *sessionDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDelegateOperation:(struct Function<void ()>={unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > >={__compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::__1::default_delete<WTF::Detail::CallableWrapperBase<void> > >=^{CallableWrapperBase<void> {}*)arg1;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataTaskWithRequest:(id)arg1;
- (id)dataTaskWithURL:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (bool)didPassCORSAccessChecks;
- (id)downloadTaskWithRequest:(id)arg1;
- (id)downloadTaskWithResumeData:(id)arg1;
- (id)downloadTaskWithURL:(id)arg1;
- (void)finishTasksAndInvalidate;
- (void)flushWithCompletionHandler:(id /* block */)arg1;
- (void)getAllTasksWithCompletionHandler:(id /* block */)arg1;
- (void)getTasksWithCompletionHandler:(id /* block */)arg1;
- (id)initWithResourceLoader:(struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; }*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isKindOfClass:(Class)arg1;
- (struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { _Atomic unsigned int x_2_1_1; } x2; }*)loader;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setSessionDescription:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(bool)arg2;
- (void)task:(id)arg1 didReceiveResponseFromOrigin:(struct Ref<WebCore::SecurityOrigin, WTF::DumbPtrTraits<WebCore::SecurityOrigin> > { struct SecurityOrigin {} *x1; }*)arg2;
- (void)taskCompleted:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithStreamedRequest:(id)arg1;
- (bool)wouldTaintOrigin:(const struct SecurityOrigin { struct atomic<unsigned int> { _Atomic unsigned int x_1_1_1; } x1; struct SecurityOriginData { struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_2_1_1; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_3_1; } x_2_2_1; } x_2_1_2; struct Optional<unsigned short> { bool x_3_2_1; union constexpr_storage_t<unsigned short> { unsigned char x_2_3_1; unsigned short x_2_3_2; } x_3_2_2; } x_2_1_3; } x2; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_3_1_1; } x3; struct String { struct RefPtr<WTF::StringImpl, WTF::DumbPtrTraits<WTF::StringImpl> > { struct StringImpl {} *x_1_2_1; } x_4_1_1; } x4; bool x5; bool x6; bool x7; bool x8; int x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;

@end
