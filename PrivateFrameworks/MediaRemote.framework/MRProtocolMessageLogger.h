/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRProtocolMessageLogger : NSObject {
    bool  _shouldLog;
}

@property (nonatomic) bool shouldLog;

+ (id)sharedLogger;

- (id)init;
- (void)logMessage:(id)arg1 client:(id)arg2 protocolMessage:(id)arg3;
- (void)setShouldLog:(bool)arg1;
- (bool)shouldLog;

@end
