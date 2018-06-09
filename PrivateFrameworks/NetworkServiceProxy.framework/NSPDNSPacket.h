/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPDNSPacket : NSObject {
    NSArray * _additionalRecords;
    NSArray * _answers;
    NSArray * _authorities;
    NSData * _data;
    long long  _identifier;
    bool  _isAuthoritativeAnswer;
    bool  _isRecursionAvailable;
    bool  _isRecursionDesired;
    bool  _isTruncated;
    long long  _messageType;
    long long  _opCode;
    NSArray * _queries;
    long long  _responseCode;
    NSDate * _timestamp;
}

@property (readonly) NSArray *additionalRecords;
@property (readonly) NSArray *answers;
@property (readonly) NSArray *authorities;
@property (readonly) NSData *data;
@property (readonly) long long identifier;
@property (readonly) bool isAuthoritativeAnswer;
@property (readonly) bool isRecursionAvailable;
@property (readonly) bool isRecursionDesired;
@property (readonly) bool isTruncated;
@property (readonly) long long messageType;
@property (readonly) long long opCode;
@property (readonly) NSArray *queries;
@property (readonly) long long responseCode;
@property (readonly) NSString *responseCodeString;
@property (readonly) NSDate *timestamp;

- (void).cxx_destruct;
- (id)additionalRecords;
- (id)answers;
- (id)authorities;
- (id)data;
- (long long)identifier;
- (id)initFromData:(id)arg1;
- (bool)isAuthoritativeAnswer;
- (bool)isRecursionAvailable;
- (bool)isRecursionDesired;
- (bool)isTruncated;
- (long long)messageType;
- (long long)opCode;
- (id)queries;
- (long long)responseCode;
- (id)responseCodeString;
- (id)timestamp;

@end
