/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebCoreNSURLSession : NSObject {
    int  _corsResults;
    struct HashSet<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::PtrHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > > { 
        struct HashTable<WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::RetainPtr<WebCoreNSURLSessionDataTask>, WTF::IdentityExtractor, WTF::PtrHash<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> >, WTF::HashTraits<WTF::RetainPtr<WebCoreNSURLSessionDataTask> > > { 
            struct RetainPtr<WebCoreNSURLSessionDataTask> {} *m_table; 
            unsigned int m_tableSize; 
            unsigned int m_tableSizeMask; 
            unsigned int m_keyCount; 
            unsigned int m_deletedCount; 
        } m_impl; 
    }  _dataTasks;
    struct Lock { 
        struct Atomic<unsigned char> { 
            struct atomic<unsigned char> { 
                unsigned char __a_; 
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
    struct RetainPtr<NSOperationQueue> { 
        void *m_ptr; 
    }  _queue;
    NSString * _sessionDescription;
}

@property (readonly, copy) NSURLSessionConfiguration *configuration;
@property (retain) <NSURLSessionTaskDelegate> *delegate;
@property (readonly, retain) NSOperationQueue *delegateQueue;
@property (readonly) bool didPassCORSAccessChecks;
@property (readonly) struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; }*loader;
@property (copy) NSString *sessionDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDelegateOperation:(struct Function<void ()>={unique_ptr<WTF::Function<void ()>::CallableWrapperBase, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >={__compressed_pair<WTF::Function<void ()>::CallableWrapperBase *, std::__1::default_delete<WTF::Function<void ()>::CallableWrapperBase> >=^{CallableWrapperBase {}*)arg1;
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
- (id)initWithResourceLoader:(struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; }*)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;
- (void)invalidateAndCancel;
- (bool)isKindOfClass:(Class)arg1;
- (struct PlatformMediaResourceLoader { int (**x1)(); struct atomic<unsigned int> { unsigned int x_2_1_1; } x2; }*)loader;
- (void)resetWithCompletionHandler:(id /* block */)arg1;
- (id)sessionDescription;
- (void)setDelegate:(id)arg1;
- (void)setSessionDescription:(id)arg1;
- (id)streamTaskWithHostName:(id)arg1 port:(long long)arg2;
- (id)streamTaskWithNetService:(id)arg1;
- (void)task:(id)arg1 didReceiveCORSAccessCheckResult:(bool)arg2;
- (void)taskCompleted:(id)arg1;
- (id)uploadTaskWithRequest:(id)arg1 fromData:(id)arg2;
- (id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2;
- (id)uploadTaskWithStreamedRequest:(id)arg1;

@end
