/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUNSLogSink : NSObject {
    int  _logLevel;
}

@property int logLevel;

+ (id)sharedInstance;

- (id)init;
- (int)logLevel;
- (id /* block */)logSinkBlock;
- (void)setLogLevel:(int)arg1;

@end
