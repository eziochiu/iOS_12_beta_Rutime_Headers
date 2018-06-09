/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudLocalDeltaQueue : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray * _deltaQueue;
    unsigned long long  _flightIndex;
    unsigned long long  _size;
}

@property (nonatomic, retain) NSMutableArray *deltaQueue;
@property (nonatomic) unsigned long long flightIndex;
@property (nonatomic) unsigned long long size;

+ (id)queueWithQueue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltaQueue;
- (void)dequeueDelta:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)enqueueDelta:(id)arg1;
- (unsigned long long)flightIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)nextDelta;
- (bool)pendingDeltas;
- (void)purgePendingChangesWithRemoteDelta:(id)arg1;
- (void)setDeltaQueue:(id)arg1;
- (void)setFlightIndex:(unsigned long long)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
