/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKColumnElement : IKCollectionElement

@property (nonatomic, readonly) NSString *columnType;
@property (nonatomic, readonly) IKImageElement *headerImage;

- (id)columnType;
- (id)headerImage;

@end
