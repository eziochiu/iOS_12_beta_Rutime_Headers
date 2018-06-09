/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSTransactionChildRelationship : NSObject {
    BSTransaction * _childTransaction;
    unsigned long long  _schedulingPolicy;
}

@property (nonatomic, readonly) BSTransaction *childTransaction;
@property (nonatomic, readonly) unsigned long long schedulingPolicy;

- (void).cxx_destruct;
- (id)childTransaction;
- (id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;
- (unsigned long long)schedulingPolicy;

@end
