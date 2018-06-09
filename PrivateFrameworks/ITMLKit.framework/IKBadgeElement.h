/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKBadgeElement : IKImageElement

@property (nonatomic, readonly, retain) NSString *textContent;

+ (bool)shouldParseChildDOMElements;

- (id)textContent;

@end
