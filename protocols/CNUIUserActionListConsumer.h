/* made by EzioChiu.
 */

@protocol CNUIUserActionListConsumer <NSObject>

@optional

- (<CNUIUserActionListDataSource> *)dataSource;
- (<CNUIUserActionListConsumerDelegate> *)delegate;

@end
