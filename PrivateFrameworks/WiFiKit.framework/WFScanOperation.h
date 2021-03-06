/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFScanOperation : WFOperation {
    WFScanRequest * _request;
    NSDictionary * _scanParameters;
    NSMutableSet * _scanResults;
    NSString * _targetSSID;
}

@property (nonatomic, retain) WFScanRequest *request;
@property (nonatomic, readonly) NSSet *results;
@property (nonatomic, retain) NSDictionary *scanParameters;
@property (nonatomic, retain) NSMutableSet *scanResults;
@property (nonatomic, copy) NSString *targetSSID;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (void)finish;
- (id)initWithRequest:(id)arg1;
- (id)request;
- (id)results;
- (void)scanDidFinishWithResults:(id)arg1 error:(int)arg2;
- (id)scanParameters;
- (id)scanResults;
- (void)setRequest:(id)arg1;
- (void)setScanParameters:(id)arg1;
- (void)setScanResults:(id)arg1;
- (void)setTargetSSID:(id)arg1;
- (void)start;
- (id)targetSSID;

@end
