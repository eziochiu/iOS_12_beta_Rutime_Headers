/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEONSURLSessionWaiter : NSObject <NSURLSessionDataDelegate> {
    id /* block */  _callback;
    NSMutableData * _data;
    <GEORequestCounterTicket> * _requestCounterTicket;
    NSURLResponse * _response;
    NSURLSession * _session;
}

@property (nonatomic, copy) id /* block */ callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <GEORequestCounterTicket> *requestCounterTicket;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (id /* block */)callback;
- (id)requestCounterTicket;
- (id)session;
- (void)setCallback:(id /* block */)arg1;
- (void)setRequestCounterTicket:(id)arg1;
- (void)setSession:(id)arg1;

@end
