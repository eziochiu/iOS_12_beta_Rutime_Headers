/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDEventsCollectionAssertion : HDAssertion {
    NSSet * _eventCollectors;
}

@property (nonatomic, retain) NSSet *eventCollectors;

- (void).cxx_destruct;
- (id)eventCollectors;
- (id)initWithOwnerIdentifier:(id)arg1;
- (void)setEventCollectors:(id)arg1;

@end