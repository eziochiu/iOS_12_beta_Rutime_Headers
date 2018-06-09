/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDResponseBodyParser : NSObject {
    id /* block */  _objectParsedBlock;
    NSObject<OS_dispatch_queue> * _parseQueue;
    NSMutableData * _parserData;
    NSError * _parserError;
    long long  _qualityOfService;
}

@property (nonatomic, copy) id /* block */ objectParsedBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *parseQueue;
@property (nonatomic, retain) NSMutableData *parserData;
@property (nonatomic, retain) NSError *parserError;
@property (nonatomic) long long qualityOfService;

- (void).cxx_destruct;
- (void)finishWithCompletion:(id /* block */)arg1;
- (id)initWithQoS:(long long)arg1;
- (id /* block */)objectParsedBlock;
- (id)parseQueue;
- (id)parserData;
- (id)parserError;
- (void)processData:(id)arg1;
- (long long)qualityOfService;
- (void)setObjectParsedBlock:(id /* block */)arg1;
- (void)setParserData:(id)arg1;
- (void)setParserError:(id)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
