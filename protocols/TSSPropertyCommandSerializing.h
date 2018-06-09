/* made by EzioChiu.
 */

@protocol TSSPropertyCommandSerializing <NSObject>

@required

- (id)initFromPropertyCommandMessage:(const struct Message { int (**x1)(); }*)arg1 unarchiver:(TSPUnarchiver *)arg2;
- (void)saveToPropertyCommandMessage:(struct Message { int (**x1)(); }*)arg1 archiver:(TSPArchiver *)arg2;

@end
