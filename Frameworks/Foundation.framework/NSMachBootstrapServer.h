/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachBootstrapServer : NSPortNameServer

+ (id)sharedInstance;

- (id)portForName:(id)arg1;
- (id)portForName:(id)arg1 host:(id)arg2;
- (id)portForName:(id)arg1 options:(unsigned long long)arg2;
- (bool)registerPort:(id)arg1 name:(id)arg2;
- (bool)removePortForName:(id)arg1;
- (id)servicePortWithName:(id)arg1;

@end
