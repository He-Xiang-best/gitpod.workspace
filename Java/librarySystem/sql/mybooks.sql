/*
Navicat MySQL Data Transfer

Source Server         : bin
Source Server Version : 50703
Source Host           : localhost:3306
Source Database       : mybooks

Target Server Type    : MYSQL
Target Server Version : 50703
File Encoding         : 65001

Date: 2020-06-26 10:11:09
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `id` int(10) NOT NULL AUTO_INCREMENT COMMENT '图书顺序号，主键递增',
  `isbn` varchar(15) NOT NULL COMMENT 'ISBN号',
  `name` varchar(50) NOT NULL COMMENT '书名',
  `author` varchar(20) NOT NULL COMMENT '作者',
  `publisher` varchar(50) NOT NULL COMMENT '出版社',
  `price` varchar(15) NOT NULL COMMENT '价格',
  `pubDate` varchar(50) NOT NULL COMMENT '出版日期',
  `deposit` varchar(50) NOT NULL COMMENT '存放位置',
  `quantify` int(5) NOT NULL COMMENT '数量',
  `lend` int(5) NOT NULL COMMENT '书本借出数量',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=34 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for lendrecord
-- ----------------------------
DROP TABLE IF EXISTS `lendrecord`;
CREATE TABLE `lendrecord` (
  `id` int(7) NOT NULL AUTO_INCREMENT COMMENT '借书记录顺序号，自增',
  `bookId` int(7) NOT NULL COMMENT '图书顺序号',
  `userId` bigint(15) NOT NULL COMMENT '借书人编号',
  `borrowName` varchar(20) NOT NULL COMMENT '借书人姓名',
  `borrowDate` varchar(50) NOT NULL COMMENT '借书日期',
  `state` varchar(6) NOT NULL COMMENT '还书状态',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=36 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for returnrecord
-- ----------------------------
DROP TABLE IF EXISTS `returnrecord`;
CREATE TABLE `returnrecord` (
  `id` int(7) NOT NULL AUTO_INCREMENT COMMENT '还书记录顺序号，自增',
  `bookId` int(7) NOT NULL COMMENT '图书顺序号',
  `userId` bigint(15) NOT NULL COMMENT '用户编号',
  `returnName` varchar(20) NOT NULL COMMENT '还书人',
  `returnDate` varchar(50) CHARACTER SET big5 NOT NULL COMMENT '还书日期',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=15 DEFAULT CHARSET=utf8;

-- ----------------------------
-- Table structure for user
-- ----------------------------
DROP TABLE IF EXISTS `user`;
CREATE TABLE `user` (
  `id` int(10) NOT NULL AUTO_INCREMENT COMMENT '用户序号',
  `userName` bigint(15) NOT NULL COMMENT '学号',
  `setPassword` varchar(15) NOT NULL COMMENT '设置密码',
  `surePassword` varchar(15) NOT NULL COMMENT '确认密码',
  `name` varchar(20) NOT NULL COMMENT '姓名',
  `sex` varchar(10) NOT NULL COMMENT '性别',
  `birthday` varchar(15) NOT NULL COMMENT '出生日期',
  PRIMARY KEY (`id`,`userName`),
  UNIQUE KEY `userName` (`userName`)
) ENGINE=InnoDB AUTO_INCREMENT=21 DEFAULT CHARSET=utf8;
