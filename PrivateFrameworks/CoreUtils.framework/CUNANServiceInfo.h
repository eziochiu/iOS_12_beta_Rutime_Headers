/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUNANServiceInfo : NSObject {
    NSString * _name;
    int  _port;
    NSDictionary * _textInfo;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic) int port;
@property (nonatomic, copy) NSDictionary *textInfo;

- (void).cxx_destruct;
- (id)_decodeTextInfoSrc:(const char *)arg1 end:(const char *)arg2 error:(id*)arg3;
- (bool)_encodeTextInfoKey:(id)arg1 value:(id)arg2 buffer:(id)arg3 error:(id*)arg4;
- (id)encodeAndReturnError:(id*)arg1;
- (id)name;
- (int)port;
- (void)setName:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setTextInfo:(id)arg1;
- (id)textInfo;
- (bool)updateWithServiceInfoData:(id)arg1 changes:(unsigned int*)arg2 error:(id*)arg3;

@end
