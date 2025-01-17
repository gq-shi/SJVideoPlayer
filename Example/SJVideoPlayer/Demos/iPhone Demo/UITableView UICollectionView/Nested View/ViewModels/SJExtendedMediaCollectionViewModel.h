//
//  SJExtendedMediaCollectionViewModel.h
//  SJVideoPlayer_Example
//
//  Created by BlueDancer on 2019/6/26.
//  Copyright © 2019 changsanjiang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SJMediaItemsTableViewCell.h"
#import "SJMeidaItemModel.h"

NS_ASSUME_NONNULL_BEGIN
extern NSInteger const SJMediaCoverTag;

@interface SJExtendedMediaCollectionViewModel : NSObject<SJExtendedMediaCollectionViewCellDataSource>
- (instancetype)initWithItem:(SJMeidaItemModel *)item mediaTitleFont:(UIFont *)font;
@property (nonatomic) CGSize size;

@property (nonatomic, strong, nullable) NSURL *url;
@property (nonatomic) NSInteger coverTag;
@property (nonatomic, copy, nullable) NSString *cover;
@property (nonatomic, copy, nullable) NSAttributedString *mediaTitle;
@property (nonatomic, copy, nullable) NSString *avatar;
@property (nonatomic, copy, nullable) NSAttributedString *username;
@property (nonatomic, strong, nullable) UIColor *backgroundColor;
@end

NS_ASSUME_NONNULL_END
