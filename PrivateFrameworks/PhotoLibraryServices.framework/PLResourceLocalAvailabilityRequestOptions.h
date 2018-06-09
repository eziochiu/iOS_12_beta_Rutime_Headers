/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLResourceLocalAvailabilityRequestOptions : NSObject {
    id /* block */  _dataHandler;
    bool  _networkAccessAllowed;
    id /* block */  _progressHandler;
    bool  _shouldPrioritize;
    NSString * _taskIdentifier;
    bool  _transient;
}

@property (nonatomic, copy) id /* block */ dataHandler;
@property (getter=isNetworkAccessAllowed, nonatomic) bool networkAccessAllowed;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) bool shouldPrioritize;
@property (nonatomic, copy) NSString *taskIdentifier;
@property (getter=isTransient, nonatomic) bool transient;

- (void).cxx_destruct;
- (id /* block */)dataHandler;
- (bool)isNetworkAccessAllowed;
- (bool)isTransient;
- (id /* block */)progressHandler;
- (void)setDataHandler:(id /* block */)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setShouldPrioritize:(bool)arg1;
- (void)setTaskIdentifier:(id)arg1;
- (void)setTransient:(bool)arg1;
- (bool)shouldPrioritize;
- (id)taskIdentifier;

@end
