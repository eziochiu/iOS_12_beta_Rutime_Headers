/* made by EzioChiu.
 */

@protocol INIntentSlotComposing <NSObject>

@required

- (NSArray *)intentSlotDescriptions;
- (NSString *)localizeValueOfSlotDescription:(INIntentSlotDescription *)arg1 forLanguage:(NSString *)arg2;

@end
