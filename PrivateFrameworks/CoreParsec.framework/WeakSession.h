/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface WeakSession : NSObject {
    PARSession * _weakSession;
}

@property (nonatomic, readonly) PARSession *strongSession;

- (void).cxx_destruct;
- (id)initWithSession:(id)arg1;
- (id)strongSession;

@end