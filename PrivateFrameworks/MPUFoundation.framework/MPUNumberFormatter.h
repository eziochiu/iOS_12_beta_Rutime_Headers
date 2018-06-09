/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUNumberFormatter : NSFormatter {
    void ** _shortNumberFormatter;
}

- (void)createFormatter;
- (void)dealloc;
- (id)init;
- (void)resetFormatter;
- (id)shortStringFromNumber:(long long)arg1;

@end