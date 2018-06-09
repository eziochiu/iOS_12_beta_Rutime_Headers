/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

@interface HTSHTTPMessage : NSObject {
    NSData * _body;
    NSMutableDictionary * _headers;
    NSString * _versionString;
}

@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) NSMutableDictionary *headers;
@property (nonatomic, copy) NSString *versionString;

- (void)addHeadersToMessage:(struct __CFHTTPMessage { }*)arg1;
- (id)body;
- (struct __CFHTTPMessage { }*)copyMessage;
- (void)dealloc;
- (id)headers;
- (void)setBody:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setVersionString:(id)arg1;
- (id)valueForHeaderField:(id)arg1;
- (id)versionString;

@end
