/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquitySQLCorePeerRange : NSObject {
    NSString * _entityName;
    NSString * _owningPeerID;
    NSNumber * _peerEnd;
    NSNumber * _peerStart;
    NSNumber * _rangeEnd;
    NSNumber * _rangeStart;
}

@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSString *owningPeerID;
@property (nonatomic, readonly) NSNumber *peerEnd;
@property (nonatomic, readonly) NSNumber *peerStart;
@property (nonatomic, readonly) NSNumber *rangeEnd;
@property (nonatomic, readonly) NSNumber *rangeStart;

- (void)dealloc;
- (id)description;
- (id)entityName;
- (id)initWithOwningPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerStart:(id)arg5 peerEnd:(id)arg6;
- (id)owningPeerID;
- (id)peerEnd;
- (id)peerStart;
- (id)rangeEnd;
- (id)rangeStart;

@end
