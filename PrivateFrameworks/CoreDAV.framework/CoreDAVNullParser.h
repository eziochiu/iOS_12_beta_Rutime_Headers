/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {
    NSError * _parserError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSError *parserError;
@property (readonly) Class superclass;

+ (bool)canHandleContentType:(id)arg1;

- (void).cxx_destruct;
- (id)parserError;
- (bool)processData:(id)arg1 forTask:(id)arg2;

@end
