/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKEventStoreWeakWrapper : NSObject {
    void * _unsafeRawPointer;
    EKEventStore * _weakEventStore;
}

@property (nonatomic, readonly) void*unsafeRawPointer;
@property (nonatomic, readonly) EKEventStore *weakEventStore;

- (void).cxx_destruct;
- (id)initWithEventStore:(id)arg1;
- (void*)unsafeRawPointer;
- (id)weakEventStore;

@end
