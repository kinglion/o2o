//
//  SearchResultViewController.h
//  o2o
//
//  Created by 小才 on 13-11-4.
//  Copyright (c) 2013年 uniideas. All rights reserved.
//

#import "LNViewController.h"
#import "LNTableView.h"
#import "CustomCell.h"
@interface SearchResultViewController : LNViewController<UITableViewDataSource,UITableViewDelegate>
@property (nonatomic,strong) ListResultBean *bean;
@property (nonatomic,strong) LNTableView *listTableView;
@property (nonatomic,strong) NSString *searchStr;
@end
