/* made by EzioChiu.
 */

@protocol SXWebContentConfigurationProvider <NSObject>

@required

- (SXWebContentConfiguration *)configurationForWidth:(double)arg1;
- (void)onChange:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
