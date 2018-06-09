/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPRemoteDataController : NSObject {
    NSURL * _URL;
    TPSURLSessionItem * _URLSessionItem;
    bool  _hasLoaded;
    bool  _loading;
    NSString * _serviceTicket;
    NSString * _userName;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, retain) TPSURLSessionItem *URLSessionItem;
@property (nonatomic) bool hasLoaded;
@property (nonatomic) bool loading;
@property (nonatomic, retain) NSString *serviceTicket;
@property (nonatomic, retain) NSString *userName;

- (void).cxx_destruct;
- (id)URL;
- (id)URLSessionItem;
- (void)cancel;
- (void)clearData;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)hasLoaded;
- (id)initWithURL:(id)arg1;
- (bool)loading;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (id)serviceTicket;
- (void)setHasLoaded:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setServiceTicket:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLSessionItem:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)userName;

@end
