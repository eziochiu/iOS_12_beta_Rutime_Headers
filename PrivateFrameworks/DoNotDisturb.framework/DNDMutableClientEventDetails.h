/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
 */

@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool shouldAlwaysInterrupt;
@property (nonatomic, copy) DNDClientEventSource *source;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setShouldAlwaysInterrupt:(bool)arg1;
- (void)setSource:(id)arg1;

@end
